//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem
{
    CoreDAVBulkRequestsItem *_crudItem;
    CoreDAVBulkRequestsItem *_simpleItem;
}

@property (strong, nonatomic) CoreDAVBulkRequestsItem *crudItem; // @synthesize crudItem=_crudItem;
@property (readonly, nonatomic) NSDictionary *dictRepresentation;
@property (strong, nonatomic) CoreDAVBulkRequestsItem *simpleItem; // @synthesize simpleItem=_simpleItem;

+ (id)copyParseRules;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

