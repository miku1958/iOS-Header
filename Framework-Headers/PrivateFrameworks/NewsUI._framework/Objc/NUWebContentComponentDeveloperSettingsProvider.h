//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXWebContentComponentDeveloperSettingsProvider-Protocol.h>

@class NSString;
@protocol FCHeadlineProviding;

@interface NUWebContentComponentDeveloperSettingsProvider : NSObject <SXWebContentComponentDeveloperSettingsProvider>
{
    id<FCHeadlineProviding> _headline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<FCHeadlineProviding> headline; // @synthesize headline=_headline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)developerSettings;
- (id)initWithHeadline:(id)arg1;

@end
