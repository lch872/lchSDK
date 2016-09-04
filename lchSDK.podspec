Pod::Spec.new do |s|
s.name         = 'lchSDK'
s.version      = '0.0.2'
s.summary      = 'Personal development SDK on iOS'
s.homepage     = 'https://github.com/lch872/lchSDK'
s.license      = 'MIT'
s.authors      = {'lch' => 'lch872@qq.com'}
s.platform     = :ios, '7.0'
s.source       = {:git => 'https://github.com/lch872/lchSDK.git', :tag => s.version}
#s.source_files = 'lchSDK/**/*.{h,m}'
s.requires_arc = true

s.subspec 'Category' do |cate|
#cate.source_files = 'lchSDK/Category/**/*.{h,m}'
cate.subspec 'NS' do |ns|
ns.source_files = 'lchSDK/Category/NS/*.{h,m}'
end

cate.subspec 'UI' do |ui|
ui.source_files = 'lchSDK/Category/UI/*.{h,m}'
end

end


s.subspec 'Tool' do |tool|
tool.source_files = 'lchSDK/Tool/*.{h,m}'
tool.dependency 'lchSDK/Category'
#tool.dependency 'lchSDK/View'
end

s.subspec 'View' do |view|
view.source_files = 'lchSDK/View/*.{h,m}'
view.dependency 'lchSDK/Category'
#view.dependency 'lchSDK/Tool'
end

end