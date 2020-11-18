//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSSet;
@protocol RERelevanceEnginePreferencesDelegate;

@interface RERelevanceEnginePreferences : NSObject <NSCopying>
{
    id<RERelevanceEnginePreferencesDelegate> _delegate;
    NSSet *_disabledDataSourceIdentifiers;
    unsigned long long _mode;
}

@property (weak, nonatomic) id<RERelevanceEnginePreferencesDelegate> delegate;
@property (copy, nonatomic) NSSet *disabledDataSourceIdentifiers; // @synthesize disabledDataSourceIdentifiers=_disabledDataSourceIdentifiers;
@property (nonatomic) unsigned long long mode; // @synthesize mode=_mode;

+ (id)defaultPreferences;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;

@end
