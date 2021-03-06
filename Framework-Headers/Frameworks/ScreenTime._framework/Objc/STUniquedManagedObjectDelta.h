//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface STUniquedManagedObjectDelta : NSObject
{
    NSString *_uniqueIdentifier;
    long long _changeType;
    NSMutableSet *_updatedProperties;
}

@property (readonly, nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (strong, nonatomic) NSMutableSet *updatedProperties; // @synthesize updatedProperties=_updatedProperties;

- (void).cxx_destruct;
- (void)deleted;
- (id)initWithUniqueIdentifier:(id)arg1;
- (void)inserted;
- (void)removePropertyWithName:(id)arg1;
- (void)updatedWithProperties:(id)arg1;

@end

