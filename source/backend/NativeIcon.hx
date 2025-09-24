package backend;

#if cpp
extern class NativeIcon {
    @:native("set_window_icon")
    public static function setWindowIcon(path:String):Void;
}
#end
