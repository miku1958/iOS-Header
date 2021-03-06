//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIUserAction.h>

@interface TIPathAction : TIUserAction
{
    unsigned long long _syllableCount;
}

@property (readonly, nonatomic) unsigned long long syllableCount; // @synthesize syllableCount=_syllableCount;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSyllableCount:(unsigned long long)arg1 keyboardState:(id)arg2;

@end

