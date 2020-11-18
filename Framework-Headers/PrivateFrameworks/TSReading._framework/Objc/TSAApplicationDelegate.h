//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSABaseApplicationDelegate.h>

@interface TSAApplicationDelegate : TSABaseApplicationDelegate
{
    BOOL _terminating;
    BOOL _inBackground;
    BOOL _activating;
    CDUnknownBlockType _alertCompletionBlock;
    BOOL _hasNotifiedEnterBackground;
}

@property (getter=isActivating) BOOL activating; // @synthesize activating=_activating;
@property (copy, nonatomic) CDUnknownBlockType alertCompletionBlock; // @synthesize alertCompletionBlock=_alertCompletionBlock;
@property BOOL hasNotifiedEnterBackground; // @synthesize hasNotifiedEnterBackground=_hasNotifiedEnterBackground;
@property (getter=isInBackground) BOOL inBackground; // @synthesize inBackground=_inBackground;
@property (getter=isTerminating) BOOL terminating; // @synthesize terminating=_terminating;

+ (id)sharedDelegate;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (BOOL)centerOnInitialSelection;
- (id)image32IconForTXTFiles;
- (id)init;
- (id)noDocumentsImagePath;
- (void)persistenceError:(id)arg1;
- (id)previewImageNameForDocumentType:(id)arg1;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (id)stringForImportingDocument;

@end

