//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCNearbyKey : NSObject
{
    unsigned short _character;
    float _logLikelihood;
}

@property (readonly, nonatomic) unsigned short character; // @synthesize character=_character;
@property (readonly, nonatomic) float logLikelihood; // @synthesize logLikelihood=_logLikelihood;

- (id)initWithCharacter:(unsigned short)arg1 logLikelihood:(float)arg2;

@end
