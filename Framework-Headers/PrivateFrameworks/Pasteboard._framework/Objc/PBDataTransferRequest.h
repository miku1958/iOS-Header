//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Pasteboard/NSProgressReporting-Protocol.h>

@class NSProgress, NSString, PBItem, PBItemCollection, PBItemRepresentation;

@interface PBDataTransferRequest : NSObject <NSProgressReporting>
{
    PBItemCollection *_itemCollection;
    PBItem *_item;
    PBItemRepresentation *_repr;
    NSProgress *_progress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PBItem *item; // @synthesize item=_item;
@property (strong, nonatomic) PBItemCollection *itemCollection; // @synthesize itemCollection=_itemCollection;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (strong, nonatomic) PBItemRepresentation *repr; // @synthesize repr=_repr;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *typeIdentifier; // @dynamic typeIdentifier;

- (void).cxx_destruct;

@end

