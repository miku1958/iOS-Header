//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/TSCEResolverLocatingProtocol-Protocol.h>
#import <TSTables/TSCETableResolverFactoryProtocol-Protocol.h>

@class NSString;

@interface TSTTableResolverFactory : NSObject <TSCETableResolverFactoryProtocol, TSCEResolverLocatingProtocol>
{
    struct TSCECalcEngine *_calcEngine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct TSCERangeRef)aggregateRangeRefForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (unsigned char)aggregateTypeForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (vector_2431c21e)categoryRefsForSpanningCategoryRef:(const struct TSCECategoryRef *)arg1;
- (vector_4115f7f8)cellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (id)initWithCalcEngine:(struct TSCECalcEngine *)arg1;
- (UUIDData_5fbc143e)mapOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (struct TSCETableResolver *)newTableResolverForResolver:(id)arg1;
- (id)resolverContainerMatchingName:(id)arg1 inDocumentRoot:(id)arg2;
- (id)resolverMatchingName:(id)arg1 inDocumentRoot:(id)arg2 contextResolver:(id)arg3;
- (id)resolverMatchingNameWithContextContainer:(id)arg1 inDocumentRoot:(id)arg2 contextContainerName:(id)arg3;
- (vector_4115f7f8)unorderedCellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (vector_10088e46)valuesForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 error:(id *)arg3;

@end
