//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/CATOperation.h>

@class CRKBook, NSString;

@interface CRKParsePDFMetadataOperation : CATOperation
{
    BOOL _parseImage;
    CRKBook *_book;
    NSString *_filePath;
}

@property (readonly, nonatomic) CRKBook *book; // @synthesize book=_book;
@property (readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property (readonly, nonatomic) BOOL parseImage; // @synthesize parseImage=_parseImage;

- (void).cxx_destruct;
- (id)fileName;
- (id)initWithPDFBook:(id)arg1 filePath:(id)arg2 parseImage:(BOOL)arg3;
- (void)main;
- (id)titleFromDictionaryRef:(struct CGPDFDictionary *)arg1;
- (void)updateTitleWithDictionaryRef:(struct CGPDFDictionary *)arg1;

@end

