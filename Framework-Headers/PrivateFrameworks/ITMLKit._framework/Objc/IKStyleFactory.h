//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKStylesGroup, NSMutableDictionary;

@interface IKStyleFactory : NSObject
{
    IKStylesGroup *_stylesGroup;
    NSMutableDictionary *_styleListsByClassSelector;
}

@property (readonly, strong, nonatomic) NSMutableDictionary *styleListsByClassSelector; // @synthesize styleListsByClassSelector=_styleListsByClassSelector;
@property (readonly, strong, nonatomic) IKStylesGroup *stylesGroup; // @synthesize stylesGroup=_stylesGroup;

+ (id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(BOOL)arg2;
- (void).cxx_destruct;
- (id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3;
- (id)initWithStylesGroup:(id)arg1;
- (id)styleListForClassSelector:(id)arg1;

@end
