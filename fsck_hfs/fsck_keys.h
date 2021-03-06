/*
 * Copyright (c) 2008 Apple Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this
 * file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

/* fsck_keys.h
 *
 * This file contains the key-value strings that a client can expect
 * to receive from fsck when it generates XML output.  The clients 
 * should use this file to parse fsck output.
 */

#ifndef _FSCK_KEYS_H
#define _FSCK_KEYS_H

/*
 * Keys for the plist generated by fsck
 */
#define kfsckVerbosity          "fsck_verbosity"    /* Verbosity level at which this message should be displayed to the user */
#define kfsckType               "fsck_msg_type"     /* Type of fsck message (status, error, etc.) */
#define kfsckMsgNumber          "fsck_msg_number"   /* Unique number associated with given message string */
#define kfsckMsgString          "fsck_msg_string"   /* String that should be displayed to the user */
#define kfsckParams             "parameters"        /* Array of parameters, if any, for the message string */

/*
 * Keys for type of parameters, if any, for the message strings.
 * The UI client can simply display the parameters to the user, 
 * or can handle them differently.  
 */
#define kfsckParamIntegerKey    "integer"       /* positive integer */
#define kfsckParamLongKey       "long"          /* positive long number */
#define kfsckParamStringKey     "string"        /* UTF-8 string */
#define kfsckParamPathKey       "path"          /* path to a file or directory in the volume */
#define kfsckParamFileKey       "file"          /* name of file */
#define kfsckParamDirectoryKey  "directory"     /* name of directory */
#define kfsckParamVolumeKey     "volumename"    /* name of a volume */
#define kfsckParamFSTypeKey     "fstype"        /* type of file system being checked */   

/*
 * The type of messages that can be generated by fsck_hfs.
 * These are the values corresponding to fsck_msg_type. 
 */
#define kfsckUnknown            "UNKNOWN"       /* type of message generated is unknown */
#define kfsckVerify             "VERIFY"        /* fsck is performing a read-only operation on the volume */
#define kfsckRepair             "REPAIR"        /* fsck is writing to file system to repair a corruption */
#define kfsckSuccess            "SUCCESS"       /* verify found that the volume is clean, or repair was successful */
#define kfsckFail               "FAIL"          /* verify found that the volume is corrupt, or verify did not complete due to error, or repair failed */
#define kfsckError              "ERROR"         /* information of corruption found or condition that causes verify/repair to fail */
#define kfsckDamageinfo         "DAMAGEINFO"    /* information about corrupt files/folders */
#define kfsckInformation        "INFORMATION"   /* information about an error message or any fsck operation */
#define kfsckProgress           "PROGRESS"      /* percentage progress of verify/repair operation */

/* Verbosity levels */
#define kfsckLevel0             "0"             /* level 0 messages should always be displayed to the user */
#define kfsckLevel1             "1"             /* level 1 messages should be only displayed in advanced mode */

#endif /* _FSCK_KEYS_H */
