//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSString;

@interface IKFourTuple : NSObject <NSCopying>
{
    NSString *_namedStyle;
    long long _specifiedValueCount;
    double _values[4];
}

@property (readonly, nonatomic) struct IKCornerRadii cornerRadiiValue;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsetsValue;
@property (readonly, nonatomic) NSString *namedStyle; // @synthesize namedStyle=_namedStyle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCornerRadii:(struct IKCornerRadii)arg1;
- (id)initWithStyleString:(id)arg1;

@end

