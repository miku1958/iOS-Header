//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIComposeTextFieldConfiguration, SKUIComposeTextFieldListView;

@protocol SKUIComposeTextFieldListViewDelegate <NSObject>
- (long long)numberOfColumnsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;
- (long long)numberOfFieldsInTextFieldList:(SKUIComposeTextFieldListView *)arg1;
- (SKUIComposeTextFieldConfiguration *)textFieldList:(SKUIComposeTextFieldListView *)arg1 configurationForFieldAtIndex:(unsigned long long)arg2;

@optional
- (void)textFieldListValidityDidChange:(SKUIComposeTextFieldListView *)arg1;
- (void)textFieldListValuesDidChange:(SKUIComposeTextFieldListView *)arg1;
@end

