//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICCloudItemIDList;

@interface MPCloudControllerItemIDList : NSObject
{
    ICCloudItemIDList *_cloudItemIDList;
}

@property (strong, nonatomic) ICCloudItemIDList *cloudItemIDList; // @synthesize cloudItemIDList=_cloudItemIDList;

+ (id)cloudItemIDListForPlaylist:(id)arg1;
- (void).cxx_destruct;
- (id)ICCloudItemIDList;
- (void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2;
- (id)init;
- (void)insertCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 atIndex:(unsigned long long)arg3;

@end

