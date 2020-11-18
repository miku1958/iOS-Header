//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RemoteUITableFooter-Protocol.h>

@class NSDictionary, NSString, OBPrivacyLinkController;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter>
{
    NSDictionary *_attributes;
    OBPrivacyLinkController *_linkController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) OBPrivacyLinkController *linkController; // @synthesize linkController=_linkController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureInPage:(id)arg1;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;

@end
