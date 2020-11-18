//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdManagerConfigurationProvider-Protocol.h>

@class NSString;
@protocol NUAdManagerConfiguration;

@interface NUFetchedAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider>
{
    NSObject<NUAdManagerConfiguration> *_configuration;
}

@property (readonly, copy, nonatomic) NSObject<NUAdManagerConfiguration> *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

@end

