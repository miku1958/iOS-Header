//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary;

@interface MPMusicPlayerControllerApplicationQueueModifications : NSObject <NSSecureCoding>
{
    NSDictionary *_insertedDescriptors;
    NSArray *_removedItemIdentifiers;
}

@property (readonly, nonatomic) NSDictionary *insertedDescriptors; // @synthesize insertedDescriptors=_insertedDescriptors;
@property (readonly, nonatomic) NSArray *removedItemIdentifiers; // @synthesize removedItemIdentifiers=_removedItemIdentifiers;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInsertedDescriptors:(id)arg1 removedItemIdentifiers:(id)arg2;

@end

