//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class MPUStackItemView, MPUStackView;

@protocol MPUStackViewDataSource <NSObject>
- (long long)numberOfItemsInStackView:(MPUStackView *)arg1;
- (void)stackView:(MPUStackView *)arg1 applyAttributesToItem:(MPUStackItemView *)arg2 atIndex:(long long)arg3;
- (void)stackView:(MPUStackView *)arg1 didCreateItem:(MPUStackItemView *)arg2;
@end
