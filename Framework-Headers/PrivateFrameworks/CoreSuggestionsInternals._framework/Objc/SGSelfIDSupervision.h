//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGSelfIDSupervision : NSObject
{
    BOOL _isPositiveExample;
    BOOL _isNegativeExample;
    struct _NSRange _candidateNameRange;
}

@property (nonatomic) struct _NSRange candidateNameRange; // @synthesize candidateNameRange=_candidateNameRange;
@property (nonatomic) BOOL isNegativeExample; // @synthesize isNegativeExample=_isNegativeExample;
@property (nonatomic) BOOL isPositiveExample; // @synthesize isPositiveExample=_isPositiveExample;

- (id)initWithEntity:(id)arg1 candidateName:(struct _NSRange)arg2;

@end

