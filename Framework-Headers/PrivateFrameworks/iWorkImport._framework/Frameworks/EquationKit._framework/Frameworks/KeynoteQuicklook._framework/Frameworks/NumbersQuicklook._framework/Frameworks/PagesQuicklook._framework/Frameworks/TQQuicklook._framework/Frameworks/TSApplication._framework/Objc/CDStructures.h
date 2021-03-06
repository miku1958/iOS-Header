//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, TSWPStorage;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct Arena;

struct ArenaStringPtr {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
};

struct Attribution;

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CachedSize {
    struct atomic<int> _field1;
};

struct CaptionInfoArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct ShapeInfoArchive *_field5;
    struct Reference *_field6;
    int _field7;
};

struct CaptionPlacementArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    int _field5;
    int _field6;
};

struct DataReference;

struct DocumentArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> _field5;
    struct ArenaStringPtr _field6;
    struct ArenaStringPtr _field7;
    struct DocumentArchive *_field8;
    struct Reference *_field9;
    struct Reference *_field10;
    struct Reference *_field11;
    struct Reference *_field12;
    struct Reference *_field13;
    struct Reference *_field14;
    struct Reference *_field15;
    struct Reference *_field16;
    BOOL _field17;
    BOOL _field18;
    BOOL _field19;
    BOOL _field20;
};

struct DrawableArchive;

struct ExtensionSet {
    struct Arena *_field1;
    unsigned short _field2;
    unsigned short _field3;
    union AllocatedData _field4;
};

struct GalleryItem {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct ArenaStringPtr _field5;
    struct Point *_field6;
    struct DataReference *_field7;
    struct DataReference *_field8;
    struct ImageAdjustmentsArchive *_field9;
    struct DataReference *_field10;
    struct DataReference *_field11;
    struct Reference *_field12;
    float _field13;
};

struct HasBits<1> {
    unsigned int _field1[1];
};

struct ImageAdjustmentsArchive;

struct ImageArchive {
    CDUnknownFunctionPointerType *_field1;
    struct ExtensionSet _field2;
    struct InternalMetadataWithArena _field3;
    struct HasBits<1> _field4;
    struct CachedSize _field5;
    struct DrawableArchive *_field6;
    struct Reference *_field7;
    struct Reference *_field8;
    struct Size *_field9;
    struct Reference *_field10;
    struct Reference *_field11;
    struct Reference *_field12;
    struct Size *_field13;
    struct Path *_field14;
    struct DataReference *_field15;
    struct DataReference *_field16;
    struct DataReference *_field17;
    struct ImageAdjustmentsArchive *_field18;
    struct DataReference *_field19;
    struct DataReference *_field20;
    struct DataReference *_field21;
    struct Path *_field22;
    struct Attribution *_field23;
    unsigned int _field24;
    BOOL _field25;
    BOOL _field26;
};

struct InternalMetadataWithArena {
    void *_field1;
};

struct KeyValue;

struct Path;

struct Point;

struct Reference;

struct Rep;

struct RepeatedPtrField<TSA::ShortcutControllerArchive_ShortcutMapEntry> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TSP::Color> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TSP::UUID> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct RepeatedPtrField<TSWP::TextPresetDisplayItemArchive> {
    struct Arena *_field1;
    int _field2;
    int _field3;
    struct Rep *_field4;
};

struct ShapeInfoArchive;

struct ShortcutControllerArchive {
    CDUnknownFunctionPointerType *_field1;
    struct InternalMetadataWithArena _field2;
    struct HasBits<1> _field3;
    struct CachedSize _field4;
    struct RepeatedPtrField<TSA::ShortcutControllerArchive_ShortcutMapEntry> _field5;
};

struct Size;

struct TSUCellCoord {
    unsigned int row;
    unsigned short column;
    BOOL _preserveRow;
    BOOL _preserveColumn;
};

struct TSUCellRect {
    struct TSUCellCoord origin;
    struct {
        unsigned int numberOfColumns;
        unsigned int numberOfRows;
    } size;
};

struct TSWPParagraphEnumerator {
    TSWPStorage *_storage;
    NSObject *_styleProvider;
    unsigned long long _parIndex;
    unsigned long long _endParIndex;
    unsigned long long _firstParIndex;
    unsigned long long _lastParIndex;
    BOOL _requireHidden;
    struct _NSRange _currentTextRange;
};

struct ThemeArchive {
    CDUnknownFunctionPointerType *_field1;
    struct ExtensionSet _field2;
    struct InternalMetadataWithArena _field3;
    struct HasBits<1> _field4;
    struct CachedSize _field5;
    struct RepeatedPtrField<TSP::UUID> _field6;
    struct RepeatedPtrField<TSP::UUID> _field7;
    struct RepeatedPtrField<TSP::Color> _field8;
    struct ArenaStringPtr _field9;
    struct Reference *_field10;
    struct Reference *_field11;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct atomic<int> {
    struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int>> {
        _Atomic int _field1;
    } _field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension>>>;

#pragma mark Named Unions

union AllocatedData {
    struct KeyValue *_field1;
    struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension>>> *_field2;
};

