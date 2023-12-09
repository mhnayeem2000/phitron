from django.shortcuts import render
from . forms import ExampleForm

# Create your views here.
def add_musi(request):
    form = ExampleForm()
    return render(request,'add_musi.html',{'form':form})