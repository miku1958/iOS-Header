//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDSharePCSData, CKShareID;

__attribute__((visibility("hidden")))
@interface CKDeleteShareInfo : NSObject
{
    CKShareID *_shareID;
    CKDSharePCSData *_pcsData;
}

@property (strong, nonatomic) CKDSharePCSData *pcsData; // @synthesize pcsData=_pcsData;
@property (strong, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;

- (void).cxx_destruct;

@end
