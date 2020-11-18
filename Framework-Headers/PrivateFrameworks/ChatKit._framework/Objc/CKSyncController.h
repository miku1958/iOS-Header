//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CKSyncController : NSObject
{
    int _restoreStateChangedToken;
    int _attachmentRestoredToken;
    BOOL _restoring;
}

@property (readonly, nonatomic, getter=isRestoring) BOOL restoring; // @synthesize restoring=_restoring;

+ (id)sharedInstance;
- (void)attachmentRestored;
- (void)postAttachmentRestored;
- (void)prioritizeAttachmentAtPath:(id)arg1;

@end

