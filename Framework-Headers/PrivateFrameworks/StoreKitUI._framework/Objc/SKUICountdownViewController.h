//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>

@class NSString, SKUIClientContext, SKUICountdownComponent, SKUIResourceLoader;

@interface SKUICountdownViewController : UIViewController <SKUIArtworkRequestDelegate>
{
    SKUIResourceLoader *_artworkLoader;
    SKUICountdownComponent *_countdownComponent;
    SKUIClientContext *_clientContext;
}

@property (readonly, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, nonatomic) SKUICountdownComponent *countdownComponent; // @synthesize countdownComponent=_countdownComponent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithCountdownComponent:(id)arg1 artworkLoader:(id)arg2;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

