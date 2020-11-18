//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHTemplateSourceDelegate-Protocol.h>

@class ACHVisibilityEvaluator, NSMutableDictionary;
@protocol ACHTemplateAssetRegistryDelegate, OS_dispatch_queue;

@interface ACHTemplateAssetRegistry : NSObject <ACHTemplateSourceDelegate>
{
    NSObject<ACHTemplateAssetRegistryDelegate> *_delegate;
    ACHVisibilityEvaluator *_visibilityEvaluator;
    NSMutableDictionary *_templateSourcesByIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (weak, nonatomic) NSObject<ACHTemplateAssetRegistryDelegate> *delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property (strong, nonatomic) NSMutableDictionary *templateSourcesByIdentifier; // @synthesize templateSourcesByIdentifier=_templateSourcesByIdentifier;
@property (strong, nonatomic) ACHVisibilityEvaluator *visibilityEvaluator; // @synthesize visibilityEvaluator=_visibilityEvaluator;

- (void).cxx_destruct;
- (void)_setBundleURLsForAchievemnt:(id)arg1;
- (void)deregisterTemplateSource:(id)arg1;
- (id)init;
- (id)initWithVisibilityEvaluator:(id)arg1;
- (void)populateResourcePropertiesForAchievement:(id)arg1;
- (void)registerTemplateSource:(id)arg1;
- (void)templateSourceDidUpdateAssets:(id)arg1;

@end

