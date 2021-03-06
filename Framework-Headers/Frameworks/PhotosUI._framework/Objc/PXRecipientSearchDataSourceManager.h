//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PXRecipientSearchDataSource;

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager
{
    NSString *_queryString;
    unsigned long long _searchState;
}

@property (readonly, nonatomic) PXRecipientSearchDataSource *dataSource; // @dynamic dataSource;
@property (copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property (nonatomic) unsigned long long searchState; // @synthesize searchState=_searchState;

- (void).cxx_destruct;
- (void)queryStringDidChange;

@end

