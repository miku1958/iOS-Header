//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicSocialAbstractOperation.h>

@class NSNumber, NSString;

@interface MusicSocialFollowOperation : MusicSocialAbstractOperation
{
    NSNumber *_storeEntityID;
    NSString *_entityType;
    BOOL _follow;
}

@property (copy, nonatomic) NSNumber *storeEntityID; // @synthesize storeEntityID=_storeEntityID;

- (void).cxx_destruct;
- (id)initWithEntityStoreID:(id)arg1 entityType:(id)arg2 shouldFollow:(BOOL)arg3;
- (void)processResponse:(id)arg1 response:(id)arg2;
- (id)serviceURL:(id)arg1;

@end

