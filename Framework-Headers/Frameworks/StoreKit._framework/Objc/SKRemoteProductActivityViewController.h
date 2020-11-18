//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientProductActivityViewController-Protocol.h>

@class NSString, SKStoreProductActivityViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductActivityViewController : _UIRemoteViewController <SKUIClientProductActivityViewController>
{
    SKStoreProductActivityViewController *_productActivityViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) SKStoreProductActivityViewController *productActivityViewController; // @synthesize productActivityViewController=_productActivityViewController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

@end
