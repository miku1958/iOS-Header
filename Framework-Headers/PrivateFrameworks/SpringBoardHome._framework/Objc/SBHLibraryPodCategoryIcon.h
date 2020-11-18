//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBLeafIcon.h>

#import <SpringBoardHome/SBHLibraryCategoryObserver-Protocol.h>

@class NSString, SBHLibraryCategory;

@interface SBHLibraryPodCategoryIcon : SBLeafIcon <SBHLibraryCategoryObserver>
{
    SBHLibraryCategory *_category;
}

@property (readonly, nonatomic) SBHLibraryCategory *category; // @synthesize category=_category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)categoryDidUpdate:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (BOOL)isCategoryIcon;
- (long long)labelAccessoryType;

@end
