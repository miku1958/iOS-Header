//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsUI/DDTelephoneNumberAction.h>

#import <DataDetectorsUI/MFMessageComposeViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)canBePerformedByOpeningURL;
- (int)interactionType;
- (id)localizedName;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)performFromView:(id)arg1;
- (id)viewController;

@end

