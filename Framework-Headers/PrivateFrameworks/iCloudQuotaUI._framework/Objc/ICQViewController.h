//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <iCloudQuotaUI/ICQPageDelegate-Protocol.h>

@class NSString, UIColor, _ICQPageSpecification;
@protocol ICQPageDelegate;

@interface ICQViewController : UIViewController <ICQPageDelegate>
{
    _ICQPageSpecification *_pageSpecification;
    UIColor *_buttonTintColor;
    id<ICQPageDelegate> _pageDelegate;
}

@property (copy, nonatomic) UIColor *buttonTintColor; // @synthesize buttonTintColor=_buttonTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<ICQPageDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property (readonly, nonatomic) _ICQPageSpecification *pageSpecification; // @synthesize pageSpecification=_pageSpecification;
@property (readonly) Class superclass;

+ (BOOL)supportsPageClassIdentifier:(id)arg1;
+ (Class)viewControllerClassForPageClassIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPageSpecification:(id)arg1;
- (void)sender:(id)arg1 action:(long long)arg2 parameters:(id)arg3;

@end

