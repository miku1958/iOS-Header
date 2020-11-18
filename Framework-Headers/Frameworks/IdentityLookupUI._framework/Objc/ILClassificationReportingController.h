//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdentityLookupUI/MFMessageComposeViewControllerDelegate-Protocol.h>

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface ILClassificationReportingController : NSObject <MFMessageComposeViewControllerDelegate>
{
    UIViewController *_hostViewController;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithHostViewController:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)reportResponse:(id)arg1 forExtension:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)reportResponseViaNetwork:(id)arg1 forExtension:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)reportViaSMSWithSender:(id)arg1 body:(id)arg2;

@end

