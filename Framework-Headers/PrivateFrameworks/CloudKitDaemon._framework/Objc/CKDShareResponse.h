//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKShare, CKShareID;

__attribute__((visibility("hidden")))
@interface CKDShareResponse : NSObject
{
    CKShareID *_shareID;
    CKShare *_share;
}

@property (strong, nonatomic) CKShare *share; // @synthesize share=_share;
@property (strong, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;

@end

