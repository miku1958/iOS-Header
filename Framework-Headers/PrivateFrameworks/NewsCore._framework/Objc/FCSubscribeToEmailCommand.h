//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCSubscribeToEmailCommand : FCCommand
{
    NSString *_DSID;
    NSString *_storeFrontID;
    NSString *_primaryLanguage;
}

@property (copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property (copy, nonatomic) NSString *primaryLanguage; // @synthesize primaryLanguage=_primaryLanguage;
@property (copy, nonatomic) NSString *storeFrontID; // @synthesize storeFrontID=_storeFrontID;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDSID:(id)arg1 storeFrontID:(id)arg2 primaryLanguage:(id)arg3;

@end
