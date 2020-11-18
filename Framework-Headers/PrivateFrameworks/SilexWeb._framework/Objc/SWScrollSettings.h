//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SWScrollSettings : NSObject
{
    BOOL _scrollEnabled;
    BOOL _scrollsToTop;
    BOOL _showsVerticalScrollIndicator;
}

@property (readonly, nonatomic) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property (readonly, nonatomic) BOOL scrollsToTop; // @synthesize scrollsToTop=_scrollsToTop;
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator; // @synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator;

- (id)initWithScrollEnabled:(BOOL)arg1 scrollsToTop:(BOOL)arg2 showsVerticalScrollIndicator:(BOOL)arg3;

@end
