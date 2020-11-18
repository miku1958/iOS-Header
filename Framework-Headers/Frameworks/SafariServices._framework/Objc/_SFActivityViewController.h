//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class NSString, _SFSafariSharingExtensionController;

@interface _SFActivityViewController : UIActivityViewController
{
    BOOL _viewCanEarlyDismiss;
    _SFSafariSharingExtensionController *_sharingExtensionController;
    NSString *_currentExtensionIdentifier;
}

@property (copy, nonatomic) NSString *currentExtensionIdentifier; // @synthesize currentExtensionIdentifier=_currentExtensionIdentifier;
@property (weak, nonatomic) _SFSafariSharingExtensionController *sharingExtensionController; // @synthesize sharingExtensionController=_sharingExtensionController;
@property (readonly, nonatomic) BOOL viewCanEarlyDismiss; // @synthesize viewCanEarlyDismiss=_viewCanEarlyDismiss;

+ (id)activeWebPageExtensionItemForURL:(id)arg1 withPreviewImageHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_executeActivity;
- (id)_extensionItemForExtensionActivity:(id)arg1;
- (id)_javaScriptProcessingFileURLInExtension:(id)arg1;
- (void)_prepareJavaScriptExtensionItemForActivity:(id)arg1;
- (void)_processJavaScriptFinalizeReturnedItems:(id)arg1 forExtension:(id)arg2;
- (void)activityDidComplete:(id)arg1 withReturnedItems:(id)arg2 success:(BOOL)arg3;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end

