//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol TVTemplateFeaturesManagerDelegate;

@interface TVTemplateFeaturesManager : NSObject
{
    NSMutableDictionary *_contextsByFeature;
    id<TVTemplateFeaturesManagerDelegate> _delegate;
}

@property (weak, nonatomic) id<TVTemplateFeaturesManagerDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)featuresManagerForAppDocument:(id)arg1;
- (void).cxx_destruct;
- (id)_contextsForFeature:(id)arg1;
- (long long)_rankForContext:(id)arg1;
- (id)currentContextForFeature:(id)arg1;
- (void)popContext:(id)arg1 forFeature:(id)arg2;
- (void)pushContext:(id)arg1 forFeature:(id)arg2;

@end
