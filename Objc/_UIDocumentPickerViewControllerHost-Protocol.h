//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSString, NSURL, _UIDocumentPickerNSURLWrapper;

@protocol _UIDocumentPickerViewControllerHost <NSObject>
- (void)_didSelectPicker;
- (void)_didSelectURLBookmark:(NSString *)arg1;
- (void)_didSelectURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(NSString *)arg1;
- (void)_stitchFileCreationAtURL:(NSURL *)arg1;
@end

