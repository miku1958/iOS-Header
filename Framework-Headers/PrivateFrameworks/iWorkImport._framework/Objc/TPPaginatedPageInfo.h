//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TPPageInfo.h>

@class NSArray, TPDrawablesZOrder;

__attribute__((visibility("hidden")))
@interface TPPaginatedPageInfo : TPPageInfo
{
}

@property (readonly, nonatomic) TPDrawablesZOrder *drawablesZOrder;
@property (readonly, nonatomic) NSArray *floatingDrawableInfos;
@property (readonly, nonatomic) BOOL isDocumentSetupPage;

- (Class)layoutClass;
- (id)orderedDrawables:(id)arg1;
- (id)pageController;
- (struct CGRect)pageFrame;
- (Class)repClass;

@end
