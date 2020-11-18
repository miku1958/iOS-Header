//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _MKLineHeaderModel : NSObject
{
    NSMutableArray *_tokens;
    BOOL _shouldUseEmptyPlaceholder;
    NSDictionary *_fontAttribute;
    CDUnknownBlockType _colorProvider;
}

@property (copy, nonatomic) CDUnknownBlockType colorProvider; // @synthesize colorProvider=_colorProvider;
@property (copy, nonatomic) NSDictionary *fontAttribute; // @synthesize fontAttribute=_fontAttribute;
@property (nonatomic) BOOL shouldUseEmptyPlaceholder; // @synthesize shouldUseEmptyPlaceholder=_shouldUseEmptyPlaceholder;

- (void).cxx_destruct;
- (id)_placeCardHeaderSeparatorString;
- (void)addToken:(id)arg1;
- (id)contentAttributedString;
- (id)description;
- (id)init;
- (void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeToken:(id)arg1;

@end

