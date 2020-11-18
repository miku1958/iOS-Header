//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGConfigurationSource-Protocol.h>

@class NSString, NSUserDefaults;

@interface PGUserDefaultsConfigurationSource : NSObject <PGConfigurationSource>
{
    NSUserDefaults *_userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

- (void).cxx_destruct;
- (id)initWithUserDefaults:(id)arg1;
- (id)objectForKey:(id)arg1;

@end
