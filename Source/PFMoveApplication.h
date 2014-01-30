//
//  PFMoveApplication.h, version 1.9
//  LetsMove
//
//  Created by Andy Kim at Potion Factory LLC on 9/17/09
//
//  The contents of this file are dedicated to the public domain.

#import <Foundation/Foundation.h>

// Error domain & codes
extern NSString *PFMoveApplicationErrorDomain;

extern const NSInteger PFMoveApplicationNoAuthCode;         // User cancelled or failed to authorize action
extern const NSInteger PFMoveApplicationTrashFailedCode;    // There was an item in Applications and we failed to delete it
extern const NSInteger PFMoveApplicationCopyFailedCode;     // Failed to copy application (no authorization request)
extern const NSInteger PFMoveApplicationCopyAuthFailedCode; // Failed to copy application even after authorization

// Result enum
typedef NS_ENUM(NSInteger, PFMoveApplicationResult) {
    PFMoveApplicationNotNecessary,  // App is in Applications folder
    PFMoveApplicationDisabled,      // User don't want to move the Application
    PFMoveApplicationFailed,        // There was an error during moving, check *pError
    PFMoveApplicationSucceeded      // Everything fine, unfortunately this one will never be returned :-) As the app will be relaunched
};

PFMoveApplicationResult PFMoveToApplicationsFolderIfNecessary(NSError **pError);
