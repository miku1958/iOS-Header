//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _GCGamepadEventFusionConfig : NSObject <NSSecureCoding>
{
    unsigned long long _sourceCount;
    unsigned int (*_matrix)[41];
}

@property (readonly, nonatomic) unsigned long long sourceCount; // @synthesize sourceCount=_sourceCount;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (void)enumeratePassedElementsForSourceAtIndex:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceCount:(unsigned long long)arg1;
- (void)setPass:(BOOL)arg1 element:(long long)arg2 forSourceAtIndex:(unsigned long long)arg3;
- (BOOL)shouldPassElement:(long long)arg1 forSourceAtIndex:(unsigned long long)arg2;

@end
