//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INMediaSearch, INPrivateSearchForMediaIntentData, NSArray;

@protocol INSearchForMediaIntentExport <NSObject, JSExport>

@property (copy, nonatomic) NSArray *mediaItems;
@property (copy, nonatomic) INMediaSearch *mediaSearch;
@property (copy, nonatomic) INPrivateSearchForMediaIntentData *privateSearchForMediaIntentData;

- (id)init;
@end
