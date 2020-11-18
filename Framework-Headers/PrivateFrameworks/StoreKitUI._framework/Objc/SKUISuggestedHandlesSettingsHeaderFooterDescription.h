//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUISettingsHeaderFooterDescription.h>

@class NSArray, SKUIClientContext;
@protocol SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;

@interface SKUISuggestedHandlesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription
{
    SKUIClientContext *_clientContext;
    NSArray *_suggestedHandles;
    id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> _delegate;
}

@property (weak, nonatomic) id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1;
- (id)helpText;
- (id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3;
- (void)selectedHandleAtIndex:(unsigned long long)arg1;
- (id)suggestedHandles;

@end

