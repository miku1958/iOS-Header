//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSKeyedUnarchiver.h>

#import <MobileTimer/MTSerializer-Protocol.h>

@class NSCoder;

@interface MTStorageReaderV1 : NSKeyedUnarchiver <MTSerializer>
{
}

@property (readonly, nonatomic) NSCoder *mtCoder;
@property (readonly, nonatomic) unsigned long long mtType;


@end
