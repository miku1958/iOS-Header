//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKGroup, PKPassGroupStackView, UIView;
@protocol PKPGSVSectionSubheaderView;

@protocol PKPassGroupStackViewDatasource <NSObject>
- (PKGroup *)groupAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfGroup:(PKGroup *)arg1;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)numberOfGroups;

@optional
- (UIView *)footerForGroupStackView:(PKPassGroupStackView *)arg1;
- (UIView *)groupStackView:(PKPassGroupStackView *)arg1 headerForPassType:(unsigned long long)arg2;
- (BOOL)groupStackView:(PKPassGroupStackView *)arg1 requiresHeaderForPassType:(unsigned long long)arg2;
- (UIView<PKPGSVSectionSubheaderView> *)groupStackView:(PKPassGroupStackView *)arg1 subheaderForPassType:(unsigned long long)arg2;
- (BOOL)groupStackView:(PKPassGroupStackView *)arg1 willHaveHeaderViewForPassType:(unsigned long long)arg2;
- (BOOL)groupStackViewShouldShowHeaderViews:(PKPassGroupStackView *)arg1;
@end

