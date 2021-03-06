//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIPageIndicatorStoreObject : NSObject
{
    UIImage *_customImage;
    long long _startIndex;
    long long _endIndex;
}

@property (strong, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
@property (nonatomic) long long endIndex; // @synthesize endIndex=_endIndex;
@property (nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;

- (void).cxx_destruct;
- (id)description;
- (id)initWithImage:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3;
- (id)splitAtIndex:(long long)arg1 withImage:(id)arg2;
- (BOOL)validPageWithinBound:(long long)arg1;

@end

