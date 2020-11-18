//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CALayer, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSCHMultiDataLayerAnimationValues : NSObject
{
    CALayer *mLayer;
    NSString *mKey;
    NSArray *mValues;
    NSArray *mKeyTimes;
    BOOL mNeedPresentationLayerValues;
}

@property (readonly, nonatomic) NSString *key; // @synthesize key=mKey;
@property (readonly, nonatomic) NSArray *keyTimes; // @synthesize keyTimes=mKeyTimes;
@property (readonly, nonatomic) CALayer *layer; // @synthesize layer=mLayer;
@property (readonly, nonatomic) BOOL needPresentationLayerValues; // @synthesize needPresentationLayerValues=mNeedPresentationLayerValues;
@property (readonly, nonatomic) NSArray *values; // @synthesize values=mValues;

+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4;
+ (id)animationValuesWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5;
- (void)dealloc;
- (id)description;
- (id)initWithLayer:(id)arg1 key:(id)arg2 values:(id)arg3 keyTimes:(id)arg4 needPresentationLayerValues:(BOOL)arg5;

@end
