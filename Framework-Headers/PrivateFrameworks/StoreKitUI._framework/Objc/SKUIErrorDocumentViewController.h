//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>

@class NSString, SKUIClientContext;

@interface SKUIErrorDocumentViewController : SKUIViewController <SKUIDocumentViewController>
{
    SKUIClientContext *_clientContext;
    unsigned long long _contentUnavailableStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithBackgroundColor:(id)arg1 clientContext:(id)arg2;
- (void)loadView;

@end

