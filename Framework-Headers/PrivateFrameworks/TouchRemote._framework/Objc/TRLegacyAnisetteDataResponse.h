//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@class AKAnisetteData;

@interface TRLegacyAnisetteDataResponse : TRResponseMessage
{
    AKAnisetteData *_anisetteData;
}

@property (copy, nonatomic) AKAnisetteData *anisetteData; // @synthesize anisetteData=_anisetteData;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

