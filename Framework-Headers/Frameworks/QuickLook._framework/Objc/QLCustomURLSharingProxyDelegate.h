//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <QuickLook/UIDocumentInteractionControllerDelegate-Protocol.h>

@class NSString;
@protocol UIDocumentInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface QLCustomURLSharingProxyDelegate : NSObject <UIDocumentInteractionControllerDelegate>
{
    id<UIDocumentInteractionControllerDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIDocumentInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end
